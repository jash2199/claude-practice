# BW Risk Assessment — Risk Management Report
**Date: 2026-09-16 (Wednesday), ~14:44 ET (real ET verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time — first BW report after the ~14:00 ET FOMC decision. Prior BW report: 2026-09-16 ~10:42 ET (Grade D-, pre-decision). Fresh WebSearch this run on the FOMC outcome/dot plot, market close reaction, 10yr yield, VIX, and the Saudi pipeline/Hormuz situation.

---

## Overall Portfolio Risk Grade: **F** (downgraded from D-)

## Single biggest risk right now
**The rate shock this desk has been flagging for three weeks is now realized, not hypothetical — and the Fed just told you it isn't done.** The FOMC hiked 25bp to 3.75%-4.00% today, unanimously, the first hike since July 2023 — exactly as priced. But the dot plot that came with it is the real news: 12 of 18 members want at least one more 25bp hike this year, and 4 want 50bp more. This is not a "one and done" shock the market can fully digest; it's the start of a tightening cycle against a portfolio that is ~74% concentrated in duration-sensitive assets (NVDA + VTI + VXUS) before even counting OMCL/GEHC's growth tilt. Compounding it: a bond sell-off today pushed the 10-year yield to its **highest level since the 2008 financial crisis** — worse than the "crossed 5%" framing this desk used yesterday. Equities shrugged it off today (S&P +0.25%, Nasdaq +0.44%) because the hike itself was priced in, but small-caps did not (Russell 2000 -0.76%), and MS's WACC-rebuild trigger clock (a settled 10yr close above 5% held a full week) keeps running toward its ~9/22 target with no reversal in sight. Zero hedging action has been taken across three weeks of this desk repeatedly naming this exact risk.

---

## Live Portfolio Snapshot (Robinhood, 2026-09-16 ~14:44 ET)

| Position | Qty (fractional) | Price | Value | Cost basis | Unrealized P/L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $215.29 | $5.34 | $5.00 | **+6.90%** | 12.23% | 10.75% |
| VTI | 0.036690 | $373.77 | $13.71 | $13.59 | +0.91% | 31.38% | 27.59% |
| VXUS | 0.154525 | $85.85 | $13.27 | $13.00 | +2.04% | 30.36% | 26.69% |
| OMCL | 0.106405 | $32.50 | $3.46 | $5.00 | **-30.84%** | 7.91% | 6.96% |
| XLE | 0.086775 | $64.49 | $5.60 | $5.00 | +11.92% | 12.81% | 11.26% |
| GEHC | 0.036393 | $64.07 | $2.33 | $2.50 | -6.73% | 5.34% | 4.69% |
| **Equity total** | | | **$43.70** | | | 100% | 87.90% |
| Cash | | | $56.01 | | | — | — |

Total account value **$99.71** = equity $43.70 + cash $56.01. Pool (total minus the $50 untouched principal reserve) ≈ **$49.71**, an accumulated **-0.59% loss** (-$0.29) on the trading book, deepening slightly from this morning. Deployable cash ≈ $6.01 (~12.09% of pool), clean vs. the 10% floor. NVDA+OMCL combined ≈ **20.15%** of equity — inside the 25% concentration trigger with a ~4.85pp buffer; NVDA alone ~12.23% — inside the 18-20% single-name trigger. Neither trigger fires this run, but neither trigger measures the real exposure — see Correlation & look-through concentration below.

---

## What actually happened today (fresh, not stale)
- **FOMC:** 25bp hike to 3.75%-4.00%, unanimous vote, first hike since July 2023. Warsh withheld his own dot (as in June). Dot plot: 12/18 members project ≥1 more 25bp hike in 2026, 4 project 50bp more, only 2 see no further hikes. **This is a hawkish dot plot layered on top of an already-expected hike** — the market's calm reaction priced the hike, not necessarily the full forward path.
- **Market close:** S&P +0.25%, Dow +0.15%, Nasdaq +0.44% (mega-cap/tech outperformed), **Russell 2000 -0.76%** — small-caps sold off on the same news large-caps shrugged off, a direct read-through risk for OMCL (a small-cap).
- **10-year Treasury:** a bond sell-off today pushed the yield to its **highest level since the financial crisis** (per CNBC/wire coverage), a step worse than yesterday's "crossed and settled above 5%" framing. MS's WACC-rebuild clock (needs a full week of settled closes above 5%) is unbroken and continuing to run toward ~9/22.
- **VIX:** ~17.0-17.2, moderate, not pricing panic — consistent with today's muted equity reaction, but a poor read on the forward-hike risk the dot plot just added.
- **Oil / Hormuz — a correction to the prevailing desk narrative:** Saudi Arabia's East-West pipeline (hit 9/11, bypasses Hormuz entirely) **remains shut**, not reopened. Today's Bloomberg headline ("Saudis pivot to send more oil via Hormuz after pipeline shut") has been read by this book's recent reports as a bullish "reopening/de-risking" signal for the Hormuz thesis. **That reading is backwards.** Saudi Arabia is compensating for its *bypass* pipeline being offline by routing *more* crude directly through the Strait itself — with US naval support. That means global oil supply is **more** dependent on Hormuz staying open right now than it was three weeks ago, not less. Iran is still refusing to reopen Hormuz-adjacent shipping-rule talks. If anything, this raises the tail-risk probability for a Hormuz disruption mattering, it does not lower it.

---

## Correlation analysis
- **NVDA / VTI / VXUS: high positive correlation (~0.7-0.85 in risk-off regimes).** VTI's own internal sector weighting is ~30%+ Information Technology at cap-weight, and VXUS carries a smaller but real tech/AI-adjacent tilt (~15-20%). This book already holds NVDA directly at 12.23% of equity — but the *look-through* tech exposure via VTI (≈31.38% × ~30% ≈ **9.4pp of equity**) and VXUS (≈30.36% × ~18% ≈ **5.5pp of equity**) adds roughly another **~15pp of equity value effectively riding on the same tech/AI factor**, bringing true single-factor tech exposure to **~27% of equity** — more than double what the headline NVDA position implies, and completely invisible to the 18-20% single-name trigger.
- **OMCL:** small-cap healthcare-IT, moderate market correlation but dominated by idiosyncratic risk — its -30.84% drawdown has tracked its own catalyst calendar (earnings guide), not the broad tape. Today's Russell 2000 underperformance is a fresh, real correlation channel for this name that didn't exist as cleanly before rates started actually rising.
- **XLE:** historically the one genuine diversifier in this book — negatively-to-uncorrelated with the other five holdings in a supply-shock scenario, positively correlated with them in a demand-destruction recession. That bifurcation matters directly for the stress test below.
- **GEHC:** lower-beta healthcare equipment name, weakest correlation to the other five holdings — the closest thing to defensive ballast this book owns, at only 5.34% of equity.

## Sector concentration (look-through, not headline)
| Sector (look-through) | Approx. % of equity |
|---|---|
| Tech / semis / AI (NVDA direct + VTI/VXUS look-through) | **~27%** |
| Broad-market equity beta (VTI/VXUS ex-tech) | ~46% |
| Energy (XLE) | ~12.8% |
| Healthcare IT (OMCL) | ~7.9% |
| Healthcare equipment (GEHC) | ~5.3% |

The headline diversification story (six tickers, five sectors) is misleading. Once VTI/VXUS are decomposed, this is a portfolio with **roughly a quarter of its equity value riding on one factor (AI/semis)**, on top of a general equity-beta base that is itself now facing a hiking cycle.

## Geographic exposure and currency risk
- **VXUS (30.36% of equity):** ~100% ex-US, multi-currency (EUR, JPY, GBP, EM currencies). A hiking Fed typically strengthens the dollar; an unhedged international fund like VXUS eats a currency translation headwind on top of any local-market weakness precisely when the Fed is tightening. This is a real, currently-uncompensated risk given today's decision.
- **XLE:** revenue is USD-denominated global crude — dollar strength (from the hike) is a structural headwind to oil prices, which **directly conflicts with XLE's role as this book's Hormuz-shock hedge.** If Hormuz-risk oil-price upside is your hedge thesis, a stronger dollar from today's hike is actively working against that hedge paying off cleanly.
- **NVDA:** heavy non-US revenue exposure (China licensing overhang, per JPM's coverage) — geopolitical/export-control risk layered on top of currency and rate risk in the same name.
- **GEHC:** US-domiciled but meaningful international revenue — secondary FX translation exposure, smaller than VXUS/NVDA.

## Interest rate sensitivity (per position)
| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows, multiple highly sensitive to discount rate (MS's own DCF gap widens as WACC rises) |
| VTI | **High** | Broad market, cap-weighted toward the same long-duration growth names |
| VXUS | **Moderate-High** | Diversified but not immune; plus currency channel above |
| OMCL | **High** | Small-cap growth name, thin balance sheet leverage sensitivity, plus small-cap credit-spread widening risk |
| XLE | **Low-Inverse** | Rates up → dollar up → typically a headwind for oil, but energy equities can decouple in a supply-shock scenario |
| GEHC | **Moderate** | Large-cap, more mature cash flows, least rate-sensitive of the six |

## Recession stress test (estimated drawdown from today's marks)
Two scenarios, because this book has two live, partially-offsetting shock channels (rate-driven demand recession vs. oil-supply-driven stagflation):

**Scenario A — demand-destruction recession (rates bite, growth slows, oil demand falls with it):**
| Position | Est. drawdown | Contribution (× equity weight) |
|---|---|---|
| NVDA | -50% | -6.1pp |
| VTI | -30% | -9.4pp |
| VXUS | -28% (+ FX drag) | -8.5pp |
| OMCL | -40% | -3.2pp |
| XLE | -35% | -4.5pp |
| GEHC | -22% | -1.2pp |
| **Total equity drawdown** | | **≈ -33%** |

**Scenario B — supply-shock stagflation (Hormuz disruption bites, oil spikes, growth still slows):**
Same as above except XLE **+20%** instead of -35% → blended equity drawdown improves to **≈ -26%**, but this is still a substantial loss, and it assumes XLE's 12.8% weight is enough to matter — it isn't, on its own, a real hedge against a ~$44 equity book.

Either way: **this book is looking at a plausible -26% to -33% equity drawdown in a recession scenario**, on top of the trading pool already sitting at a -0.59% accumulated loss with no cushion built.

## Liquidity risk by holding
| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Low risk | Mega-cap, deep market |
| VTI | Low risk | Massive AUM ETF, tight spreads |
| VXUS | Low risk | Large AUM ETF, tight spreads |
| XLE | Low risk | Large sector ETF, tight spreads |
| GEHC | Low-Moderate | Large-cap, decent depth |
| OMCL | **Moderate-High** | Small-cap healthcare IT, thinner average volume, wider spreads — immaterial in dollars at this position size ($3.46) but the rating reflects real execution risk at any meaningful scale |

## Single stock risk & position sizing
- **NVDA (12.23% direct + ~15pp look-through via VTI/VXUS):** the true single-factor exposure here is nearly double what the headline number shows. **Do not add** at current levels — MS's DCF gap is widening as the WACC-rebuild clock runs, and the position is already carrying its full weight via three separate vehicles.
- **OMCL (7.91% of equity, -30.84% unrealized, no stop-loss):** the single riskiest dollar-for-dollar position in the book — a small-cap name sitting on a near-third loss with zero downside protection, held purely on "no structural break has fired" logic. That logic is sound *as a discipline*, but radical transparency requires saying plainly: this is a name the book would not have sized the same way today, and it is being held via inertia + a rule, not via fresh conviction.
- **GEHC (5.34%, -6.73%):** smaller idiosyncratic exposure, inside its revised $62-65 continuation band — the least concerning of the two underwater names.

## Tail risk scenarios (with probability estimates, next 30 days)
| Scenario | Est. probability | Portfolio impact |
|---|---|---|
| Fed delivers a hawkish surprise beyond the dot plot (additional hike priced in faster, or a 50bp move) | ~30-35% | Further multiple compression across NVDA/VTI/VXUS, -10-15% incremental equity drawdown |
| Hormuz actually disrupted (not just "more dependent on") given pipeline still offline | ~15-20% | XLE +30-50%, but broader equity book -15-20% on stagflation fear; net portfolio effect likely still negative given XLE is only 12.8% of equity |
| NVDA-specific China export-control reversal (H200 licensing pulled back) | ~10-15% | NVDA -20-30% single-day-type move |
| OMCL structural break (contract loss, guidance cut) | ~10% | Additional -20-30% on an already-impaired position |
| Combined recession + Hormuz shock (stagflation) simultaneously | ~5-8% | The -26% to -33% blended equity stress case above |

## Hedging strategies for the top 3 risks (equities-only toolbox, no options)
1. **Rate/duration shock (biggest risk):** trim explicit + look-through tech exposure — reduce NVDA and/or VTI modestly rather than adding, and hold the freed cash rather than deploying it while the WACC-rebuild clock is live (through ~9/22). Cash is the only true "hedge" available against a duration shock in an equities-only toolbox.
2. **Oil/Hormuz shock (now more live, not less):** XLE is the only instrument this book has that responds correctly to this scenario — a modest increase to XLE funded from NVDA/VTI trims improves the stagflation-scenario outcome, accepting the dollar-strength headwind noted above as a partial offset, not a reason to skip it.
3. **Small-cap/OMCL idiosyncratic risk:** no hedge exists in this toolbox for single-name idiosyncratic risk other than sizing discipline — the existing DCA gate (rule 18) is the correct mechanism; the ask here is simply: don't relax it while the name is underwater and small-caps are underperforming on the same macro news that's hitting rates.

## Rebalancing suggestions (allocation %, of equity)
| Position | Current | Suggested target | Direction |
|---|---|---|---|
| NVDA | 12.23% | ~10% | Trim ~2pp |
| VTI | 31.38% | ~28% | Trim ~3pp |
| VXUS | 30.36% | ~29% | Hold/light trim |
| OMCL | 7.91% | 7.91% | Hold (governed by existing DCA gate, not this desk) |
| XLE | 12.81% | ~15% | Add ~2pp (funded from NVDA/VTI trims above) |
| GEHC | 5.34% | 5.34% | Hold |

This is a **directional recommendation, not an instruction to trade** — sizing decisions cross-vet against MS's DCF and BR's allocation framework per house rule 6, and this desk has no execution authority.

---

## Risk Heat Map Summary

| Risk factor | Level | Trend vs. yesterday |
|---|---|---|
| Interest rate / duration risk | 🔴 Severe | 🔺 Worse (hike confirmed + hawkish dot plot) |
| Sector/factor concentration (look-through tech) | 🔴 Severe | ➡️ Unchanged, still under-recognized |
| Single stock risk (NVDA + OMCL) | 🟠 High | ➡️ Unchanged |
| Currency/FX risk (VXUS, oil-dollar link) | 🟠 High | 🔺 Worse (dollar strength from hike) |
| Geopolitical / Hormuz-oil risk | 🟠 High | 🔺 Worse (more Hormuz-dependent, not less — desk narrative corrected this run) |
| Liquidity risk | 🟡 Moderate | ➡️ Unchanged (OMCL only) |
| Recession drawdown exposure | 🔴 Severe | ➡️ Unchanged (-26% to -33% blended stress case) |
| Hedging coverage | 🔴 Severe (none implemented) | ➡️ Unchanged — three weeks of flags, zero action |

**Bottom line:** the risk this desk has been calling "pending" is now confirmed and the Fed just signaled it isn't finished. Nothing about today's calm equity close should be read as the all-clear — small-caps already didn't buy it, bonds sold off to a post-2008 high, and the oil hedge this book is relying on is now carrying more tail exposure than before, not less. Grade: **F**, first F this desk has issued, until either concrete de-risking action is taken or the WACC-rebuild clock breaks clean.
