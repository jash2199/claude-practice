# BW Risk Assessment — Risk Management Report
**Date: 2026-09-18 (Friday), ~10:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. First BW report today. Fresh WebSearch this run on the 10-year Treasury's settled close, the Saudi East-West pipeline timeline, and GEHC/Sofie.

---

## Overall Portfolio Risk Grade: **D** (upgraded from three consecutive F's — see why below, and see why this is not a green light)

## Single biggest risk right now
**BR fixed the process failure, not the substance — and in fixing the process it introduced a new, unaddressed arithmetic error.** BR's 9/17 ~16:11 ET report finally answered this desk's overdue cross-desk vet with a policy-target revision (NVDA 11%→10%, VTI 30%→28%, XLE 10%→12%, Cash 10%→11% of pool), closing the four-report-old "why hasn't anyone responded" complaint. Credit where due, per the stance this desk holds itself to. But look at what actually moved: BR's revision touches the **headline** NVDA target only. The look-through tech/AI factor exposure this desk has now flagged for a fourth-plus consecutive report — ~27% of equity once VTI's ~30% IT cap-weight and VXUS's tech tilt are counted on top of NVDA's direct stake — is completely untouched. Lowering NVDA's target by 1pp while VTI/VXUS keep their weight does nothing to the real single-factor number. Separately, BR's own new XLE top-up trigger has a funding math hole: it authorizes a "$2-3 top-up, funded from cash," but deployable cash today (~$6.01, 12.08% of pool) sits only **~$0.53-0.60 above the newly-set 11% reserve floor**. Funding a full $2-3 add from cash, as written, would draw the reserve to roughly 7% of pool — a direct breach of the floor BR set in the *same report* that created the trigger. Today's run notes confirm the trigger's valuation leg didn't fire anyway (MS's XLE gap widened to -2.1%, worse than the -1.8% bar), so the hole hasn't been walked into yet — but it's live, unflagged by BR, and needs fixing before the trigger's price leg ever does clear.

---

## Live Portfolio Snapshot (Robinhood, 2026-09-18 ~10:42 ET)

| Position | Qty (fractional) | Price | Value | Cost basis | Unrealized P/L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $219.21 | $5.44 | $5.00 | **+8.8%** | 12.44% | 10.93% |
| VTI | 0.036690 | $374.50 | $13.74 | $13.59 | +1.1% | 31.40% | 27.61% |
| VXUS | 0.154525 | $85.585 | $13.23 | $13.00 | +1.7% | 30.22% | 26.57% |
| OMCL | 0.106405 | $32.18 | $3.42 | $5.00 | **-31.5%** | 7.82% | 6.88% |
| XLE | 0.086775 | $64.555 | $5.60 | $5.00 | +12.0% | 12.80% | 11.26% |
| GEHC | 0.036393 | $64.04 | $2.33 | $2.50 | -6.8% | 5.33% | 4.68% |
| **Equity total** | | | **$43.76** | | | 100% | 87.92% |
| Cash | | | $56.01 | | | — | 12.08% |

Total account value **$99.77** = equity $43.76 + cash $56.01. Pool (total minus the $50 reserve) ≈ **$49.77**, a **-0.45% accumulated loss** — essentially flat vs. this morning's 09:37/10:37 reads (-0.40%/-0.46%), tracking a broad small pullback (five of six holdings red vs. yesterday's official close; XLE the lone green name, +0.12%). Deployable cash ≈$6.01 (12.08% of pool), clean vs. BR's 11% floor — but see the funding-math problem above; that "clean" 1.08pp buffer is not the $2-3 BR's own trigger assumes it can draw on. NVDA+OMCL combined ≈**20.26%** of equity (25% headline trigger clean, ~4.74pp buffer); NVDA alone ~12.44% (18-20% single-name trigger clean). Both triggers remain the wrong instrument for this book's actual largest risk — see Correlation below, unchanged in substance for a fifth straight report.

---

## What's actually new since 9/17 ~14:42 ET
- **BR's cross-desk vet posted (9/17 ~16:11 ET) — see Single biggest risk above.** Process risk resolved; substantive concentration risk not addressed; a new funding-arithmetic risk introduced. Net: a genuine but partial improvement, which is the entire reason this report's grade moves off F for the first time in three reports.
- **10-year Treasury: a real, confirmed data point, finally.** The official close for 9/17 was **4.93%** (CNBC), more than 7bp lower on the day and the first confirmed settled close below 5% since the FOMC hike — not yesterday's intraday quote, an actual close. This is directionally the first real step toward rule 6a's lift condition (two consecutive settled closes below 4.75%), but **4.93% is still 18bp above that threshold and today's own close isn't in yet** (market is open; this run is intraday). Rule 6a's pause remains fully in effect. Logged per rule 17's discipline — a genuine easing, not a trigger.
- **Saudi East-West pipeline: the estimate spread widened further, not narrowed, and now genuinely brackets "days" through "5-6 weeks."** Fresh sourcing this run: US Energy Secretary Chris Wright ("days," 9/15, an official with an incentive to downplay), vs. two regional officials to AP ("three to five weeks"), vs. Reuters sourcing ("five to six weeks, though one source said operations could restart sooner"). That's a wider disagreement than 9/17's "days vs. at least a month" framing, not a resolution of it. Meanwhile crude is *falling* (two-day losing streak as of today) — the market is pricing toward the optimistic end even as credible reporting leans longer. **This is exactly the setup where XLE's hedge thesis and the tape can diverge**: if the market keeps discounting the bullish case and a slower repair is what actually happens, XLE could underreact on the way up when the book needs it most. Combined with MS's valuation gap widening to -2.1% overvalued, this desk's confidence in XLE as an efficiently-priced hedge is lower today than it was two reports ago, even though XLE's structural role in the book is unchanged.
- **GEHC / Sofie Biosciences:** no new confirmation since the 9/13-9/14 FT/Reuters reporting ("advanced talks," possible announcement "as soon as next week" — that week has now passed with nothing). Treat the deal as stalled-or-quiet, not dead and not imminent; the prior soft deadline has lapsed unconfirmed, consistent with MS's read. GEHC at $64.04, back inside the $62-65 continuation band.
- **NVDA / OMCL:** no name-specific news dated today found via dedicated WebSearch. OMCL DCA gate (rule 18): pool net-negative (-0.45%), still loss-gated, roughly $2.73-2.75 of accumulated profit away from firing — essentially unchanged.
- **MU (not held):** JPM flagged a 9/21 Taiwan labor-mediation deadline — calendar note only, no book exposure.

---

## Correlation analysis
- **NVDA / VTI / VXUS: still high positive correlation (~0.7-0.85 in risk-off regimes) — unchanged, and BR's target revision did not touch this.** VTI (31.40% × ~30% tech cap-weight ≈ **9.4pp of equity**) plus VXUS (30.22% × ~18% tech tilt ≈ **5.4pp of equity**) adds ~15pp of equity riding the same AI/tech factor on top of NVDA's direct 12.44%, for **true single-factor tech exposure of ~27% of equity** — a fifth straight report with this number essentially unchanged, and still fully invisible to the 18-20%/25% headline triggers BR just revised without touching it.
- **OMCL:** small-cap healthcare-IT, idiosyncratic-risk-dominated, with a symmetric live correlation channel to Russell 2000 small-cap moves (per GS) — currently a modest tailwind, irrelevant to the -31.5% position-specific drawdown itself.
- **XLE:** the book's only Hormuz-shock diversifier, now carrying two live complications simultaneously — a widened valuation gap (-2.1% per MS) and a widening, not narrowing, disagreement on the underlying repair timeline it's meant to hedge. A hedge can still be functionally correct in direction while being priced less attractively and less certain in its trigger timing than it was a week ago; all three facts are true at once here.
- **GEHC:** lowest-beta, weakest-correlated name in the book at 5.33% of equity — still too small to matter as portfolio ballast.
- **Cash (12.08% of pool):** this book's only genuine rate-duration hedge given no bonds/options are used. BR's own trigger, if fired as written, would spend most of that cushion on a single satellite add rather than preserve it through the rule 6a pause window — a tension BW is flagging now rather than after the fact.

## Sector concentration (look-through, not headline)
| Sector (look-through) | Approx. % of equity |
|---|---|
| Tech / semis / AI (NVDA direct + VTI/VXUS look-through) | **~27%** |
| Broad-market equity beta (VTI/VXUS ex-tech) | ~46% |
| Energy (XLE) | ~12.8% |
| Healthcare IT (OMCL) | ~7.8% |
| Healthcare equipment (GEHC) | ~5.3% |

Unchanged in substance for a fifth straight report. BR's 9/17 revision changed labels (NVDA 11%→10%), not this table.

## Geographic exposure and currency risk
- **VXUS (30.22% of equity):** ~100% ex-US, multi-currency. If 9/17's rate easing extends, it's a genuine partial offset to the dollar-strength headwind flagged the last several reports — one data point, not a trend yet.
- **XLE:** USD-denominated global crude revenue; dollar strength from the hiking cycle remains a structural headwind against XLE's hedge role, now compounded by the widened valuation gap above.
- **NVDA:** heavy non-US revenue exposure, China licensing/export-control overhang layered on currency and rate risk — unchanged.
- **GEHC:** US-domiciled with meaningful international revenue; smaller, secondary FX exposure vs. VXUS/NVDA — unchanged.

## Interest rate sensitivity (per position)
| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's DCF gap (-5.6% overvalued) is a mechanical roll, unmoved by 9/17's confirmed rate easing |
| VTI | **High** | Broad market, cap-weighted toward the same long-duration growth names |
| VXUS | **Moderate-High** | Diversified but not immune; the currency channel above would partially help if the rate move extends |
| OMCL | **High** | Small-cap growth, thin balance sheet, live symmetric Russell 2000 correlation channel |
| XLE | **Low-Inverse** | Rates up → dollar up → headwind for oil; a rate reversal helps XLE on FX even as MS's valuation call gets less favorable |
| GEHC | **Moderate** | Larger-cap, more mature cash flows, least rate-sensitive of the six |

## Recession stress test (estimated drawdown from today's marks)

**Scenario A — demand-destruction recession (rates bite, growth slows, oil demand falls with it):**
| Position | Est. drawdown | Contribution (× equity weight) |
|---|---|---|
| NVDA | -50% | -6.2pp |
| VTI | -35% | -11.0pp |
| VXUS | -30% | -9.1pp |
| OMCL | -45% | -3.5pp |
| XLE | -20% (hedge doesn't help — demand-side shock) | -2.6pp |
| GEHC | -35% | -1.9pp |
| **Equity-level total** | | **≈ -34.3%** |
| **Pool-level (equity ≈88% of pool, cash unaffected)** | | **≈ -30%** |

**Scenario B — supply-shock stagflation (Hormuz/pipeline escalates, oil spikes, rates stay elevated via inflation):**
| Position | Est. drawdown | Contribution (× equity weight) |
|---|---|---|
| NVDA | -45% | -5.6pp |
| VTI | -30% | -9.4pp |
| VXUS | -25% | -7.6pp |
| OMCL | -35% | -2.7pp |
| XLE | **+40%** (hedge works here) | +5.1pp |
| GEHC | -20% | -1.1pp |
| **Equity-level total** | | **≈ -21.3%** |
| **Pool-level** | | **≈ -19%** |

XLE's offset in Scenario B (+5.1pp) is real but partial — at 12.8% of equity it cannot come close to fully hedging a book that is ~74% equity beta (VTI+VXUS+NVDA) by construction. The Scenario A / B gap (-30% vs. -19% pool-level) is the clearest quantified argument this desk has for why the look-through tech concentration, not the headline NVDA%, is the risk that actually decides how bad a real shock gets.

## Liquidity risk (per holding)
| Position | Liquidity rating | Why |
|---|---|---|
| NVDA | **Low risk** | Mega-cap, extremely deep market |
| VTI | **Low risk** | Broad-market ETF, very high volume |
| VXUS | **Low risk** | Broad-market ETF, high volume |
| XLE | **Low risk** | Large sector ETF, deep market |
| GEHC | **Low-moderate risk** | Large-cap but thinner book than the mega-caps |
| OMCL | **Moderate risk** | Small/mid-cap, thinner daily volume and wider spreads — the position most likely to see execution slippage if a fast exit were ever needed |

At this book's ~$100 scale, liquidity is not currently a binding constraint anywhere — flagged for completeness, not as an active concern.

## Single stock risk and position sizing
- **NVDA (12.44% equity / 10.93% pool):** clean vs. the 18-20% headline trigger, but that trigger was never the right instrument — see Correlation. Recommendation unchanged: BR should adopt a **look-through-adjusted concentration trigger** (counting VTI/VXUS tech tilt against the same 25-27% ceiling that governs NVDA+OMCL today) at the ~10/1 full underwrite, not leave it a narrative caveat for a sixth consecutive report.
- **OMCL (7.82% equity, -31.5% unrealized):** already the deepest-discount, most underweight-by-design position in the book. Not a sizing-up candidate under any scenario; the profit-gated DCA mechanism (rule 18) is the right level of caution here and should not be loosened even as the pool's loss makes the gate feel further away.
- **XLE (12.80% equity):** see Single biggest risk — the *target* (12%) is reasonable per BR's own stress-test logic, but the *funding mechanism* for getting there has an arithmetic hole that needs closing before it matters.
- **GEHC (5.33% equity):** too small to be a single-stock risk on its own; the open question is qualitative (Sofie deal outcome), not sizing.

## Tail risk scenarios (probability estimates, next ~4-8 weeks)
| Scenario | Est. probability | Book impact |
|---|---|---|
| Hormuz/Strait actually closes (beyond pipeline strikes) | ~5-8% | Oil spikes >$150, XLE surges but is only 12.8% of equity — broad market (VTI/VXUS/NVDA/OMCL/GEHC, ~87% of equity) sells off on recession fear faster than XLE can offset. Net negative for the book despite the hedge. |
| AI/hyperscaler capex air-pocket (a major customer pulls back spend) | ~10-15% | Hits NVDA directly and the ~27% look-through tech factor simultaneously — the single scenario this book is least protected against, precisely because no trigger sees the look-through number |
| 10yr yield spike back above 5.5-6% (inflation surprise, Fed-credibility scare) | ~15-20% | Correlated hit to NVDA/VTI/VXUS/OMCL (all long-duration growth); XLE the only relative winner via dollar/oil channel |
| OMCL idiosyncratic further deterioration (earnings miss, contract loss) | ~15% | Position-specific; already down -31.5%, thin liquidity (see above) would amplify any forced-exit slippage |
| Semis supply-chain labor disruption spreads (Taiwan-style) beyond MU | ~5% | Correlated hit to NVDA and the tech look-through factor |

## Hedging strategies for the top 3 risks (equities-only — no options in this book)
1. **Look-through tech/AI concentration (~27% of equity, unaddressed by BR's revision):** the only real equities-only lever is to dilute the factor over time — direct new contributions or any future core-up toward a lower-tech-weight or value/defensive equity sleeve (e.g., a broad low-beta or dividend-equity fund) rather than adding to VTI/NVDA, and hold that stance through the rule 6a pause rather than waiting for a forced trim.
2. **Hormuz/oil supply shock, under-hedged and now mispriced by MS's own model:** fix the funding math before the trigger's price leg clears — size the top-up to what the 11% reserve floor can actually fund (~$0.50-0.60 today, not $2-3) unless BR explicitly and consciously revises the floor; alternatively, treat the wide repair-timeline spread as a reason to wait for tighter sourcing convergence before adding to a position MS calls modestly overvalued.
3. **Rate/duration risk across the growth sleeve:** cash is this book's only true rate hedge with no bonds/options available. Recommendation: don't spend the cash cushion down toward the 11% floor on marginal satellite adds while rule 6a's pause is active and the 10yr is still 18bp above its lift threshold — preserve the buffer as the de facto hedge it already is.

## Rebalancing suggestions
- **Do not treat BR's 9/17 revision as the concentration fix — it isn't one.** Propose a look-through-adjusted policy target (effective tech/AI exposure capped near 20-22% of equity, not the current ~27%) be put on the ~10/1 full-underwrite agenda as a firm agenda item, not a standing caveat.
- **Cap the XLE top-up at what the reserve arithmetic supports** (~$0.50-0.60 from today's excess cash) until BR either revises the 11% floor on purpose or names a different funding source (e.g., a partial VTI trim, which the 9/17 report explicitly ruled out but didn't reconcile against the shortfall).
- **No rebalancing action recommended on GEHC or OMCL this run** — both are sub-8% of equity and governed by existing, appropriately conservative mechanisms (contingency plan / DCA gate).

---

## Heat map summary

| Risk factor | Level | Trend vs. 9/17 |
|---|---|---|
| Look-through tech/AI concentration | 🔴 High | → unchanged (5th report) |
| XLE hedge — valuation | 🟡 Moderate | ↓ worse (-1.8% → -2.1%) |
| XLE hedge — funding mechanism | 🔴 High (newly identified) | New this run |
| Hormuz/oil supply risk | 🟡 Moderate | → sourcing spread widened, unresolved |
| Interest rate / duration risk | 🟡 Moderate | ↑ slightly better (confirmed sub-5% close) |
| OMCL single-position drawdown | 🟡 Moderate | → unchanged (-31.5%) |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |
| Cross-desk process (BR responsiveness) | 🟢 Low (resolved) | ↑ much better — vet posted |

---

Sources:
- [Treasury yields move lower after Fed kicks off hiking cycle - CNBC, 2026-09-17](https://www.cnbc.com/2026/09/17/treasury-yields-move-lower-after-fed-kicks-off-hiking-cycle.html)
- [10-year Treasury yield climbs back to 5% after Fed hikes rates, Warsh highlights inflation risks - CNBC, 2026-09-16](https://www.cnbc.com/2026/09/16/treasury-yield-bond-market-fed-decision.html)
- [A breakout in the 10-year Treasury yield could hold back stocks if it reaches this level - CNBC, 2026-09-17](https://www.cnbc.com/2026/09/17/a-breakout-in-the-10-year-treasury-yield-could-hold-back-stocks-if-it-reaches-this-level.html)
- [Saudi pipeline closure is a brief interruption that will last days, U.S. Energy secretary tells CNBC - CNBC, 2026-09-15](https://www.cnbc.com/2026/09/15/saud-arabia-east-west-pipeline-iran-war-chris-wright.html)
- [Saudi oil pipeline hit in strikes will be mostly out of service for several weeks - PBS News](https://www.pbs.org/newshour/world/saudi-oil-pipeline-hit-in-strikes-will-be-mostly-out-of-service-for-several-weeks)
- [Why Saudi Arabia's East-West pipeline matters for global oil - Al Jazeera, 2026-09-14](https://www.aljazeera.com/news/2026/9/14/why-saudi-arabias-east-west-pipeline-matters-for-global-oil)
- [GE HealthCare (GEHC) Reportedly Eyes $1B Sofie Deal - Yahoo Finance](https://finance.yahoo.com/healthcare/articles/ge-healthcare-gehc-reportedly-eyes-045718870.html)
- [GE Healthcare in Talks To Acquire Sofie Biosciences - Benzinga, 2026-09](https://www.benzinga.com/markets/equities/26/09/61755546/ge-healthcare-in-talks-to-acquire-sofie-biosciences-a-maker-of-cancer-scan-chemicals)
- Internal: trading-experiment/state.md (9/18 09:37/10:37 ET), analysts/br-portfolio-builder.md (9/17 ~16:11 ET, target revision), analysts/ms-dcf-valuation.md (9/18 ~10:1x ET), analysts/gs-stock-screener.md (9/18 ~09:3x ET), analysts/jpm-earnings-analyzer.md (9/18 ~09:20 ET)
