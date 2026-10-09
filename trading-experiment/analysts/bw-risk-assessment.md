# BW Risk Assessment — Risk Management Report
**Date: 2026-10-09 (Friday), ~10:41 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Thirteenth BW report overall, first today — follows this desk's own 10/8 ~14:41 ET report (D-, held, flagged an accelerating uncatalyzed sell-off and declined to confirm XLE's hedge streak) and the trader's own 10/9 ~10:37 ET run note (no trade, pool +1.48%, continued bounce, MS's first-ever AVGO DCF a hard pass).

---

## Overall Portfolio Risk Grade: **D-** — held, unchanged from 10/8 ~14:41 ET

## Single biggest risk right now
**This book is now flying blind on its core rate input for a third consecutive week, and today's broad green session finally gives this desk a second, countervailing data point on the one open question that matters most: is XLE actually a hedge, or just another long that happens to go up on both good days and bad?** Fresh WebSearch this run on all three standing fronts (10yr Treasury, NVDA/AI-bubble news, Brent/Hormuz) again returned nothing dated 2026-10-09 — the 10yr query surfaced nothing newer than April/June-2026 vintage data, the NVDA query surfaced only November-2025 bubble coverage, and the Brent query topped out at 10/2 and 10/5 readings (~$102-103, swinging $100-108 on a rejected Iranian reopening offer) that are now 4-7 days stale. Per rule 4 this is "no new information," but radical transparency means naming the pattern itself as the risk: every DCF-dependent position in this book (NVDA, GEHC, OMCL, XLE) has had its risk-free-rate assumption frozen at 10/1's levels for a full week longer than any desk anticipated, with no mechanism in place to detect if that assumption has since broken.

**The second half of today's story is the more interesting one for this desk's standing skepticism.** On 10/8's sharp sell-off, XLE was the lone green holding and the clean decoupling looked hedge-like. Today, on a broad market-wide bounce (every single holding is green: NVDA +0.11%, VTI +0.34%, VXUS +0.53%, OMCL +2.04%, XLE +0.67%, GEHC +1.78%), **XLE is not the standout — it's solidly mid-pack, trailing both OMCL and GEHC's gains by a wide margin.** A genuine, dedicated Hormuz/oil-shock hedge should look different on green days than on red ones: either roughly uncorrelated with the broad bounce (its driver is oil-supply risk, not general risk appetite) or actively lagging if the bounce itself reflects *de-escalation* relief. Instead it moved up by a middling amount alongside everything else, with no dedicated oil/Hormuz catalyst this desk could find to explain even that much. Taken together with 10/8's decoupling, the book now has one data point consistent with "hedge" and one data point consistent with "ordinary long with some beta to risk sentiment" — **still genuinely unresolved, and this desk continues to decline to upgrade confidence in the hedge thesis** until a dated, sourced catalyst actually explains a move in either direction.

---

## Portfolio snapshot (live, 2026-10-09 ~10:41 ET)

`get_portfolio`: total_value **$100.72511403** (cash $56.10 + equity $44.62511403). Pool ≈ **$50.72511403**, a **+$0.72511403 (+1.45%) accumulated profit** — up from 10/8's close (+0.83%) and this morning's own 09:43 ET (+1.35%) and 10:37 ET (+1.48%) readings, continuing a broad two-day-old bounce. Deployable cash $6.10 (~12.03% of pool).

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/8 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $230.725 | $5.728 | 12.83% | 11.29% | +14.57% ($201.40) | +0.11% |
| VTI | 0.036690 | $380.84 | $13.973 | 31.31% | 27.54% | +2.82% ($370.40) | +0.34% |
| VXUS | 0.154525 | $84.545 | $13.064 | 29.27% | 25.75% | +0.49% ($84.13) | +0.53% |
| OMCL | 0.106405 | $35.54 | $3.782 | 8.48% | 7.46% | -24.37% ($46.99) | **+2.04% (today's biggest gainer)** |
| XLE | 0.086775 | $65.675 | $5.699 | 12.77% | 11.24% | +13.98% ($57.62) | +0.67% (mid-pack — see above) |
| GEHC | 0.036393 | $65.36 | $2.379 | 5.33% | 4.69% | -4.85% ($68.69) | +1.78% |
| Cash (deployable) | — | — | $6.10 | — | 12.03% | — | — |

NVDA+OMCL combined concentration: **21.31% of equity** — 3.69pp buffer to the 25% backstop trigger, essentially flat vs. 10/8 (both names up together). NVDA alone: **12.83% of equity**, comfortably below the 18-20% single-name trigger; **11.29% of pool** vs. BR's 10% target (+1.29pp over, inside the 5pp drift band, governed by rule 20's standing no-new-cash instruction). OMCL's DCA gate (rule 18: fires at $2.50 accumulated pool profit): **~$1.78 away**, the closest reading in over a week on today's bounce. GEHC ($65.36) sits right at the top edge of its closed $62-65 continuation band — no symmetric upside trigger exists by design (per BR's 10/5 closure of that question), so this is a note, not a live mechanism.

---

## 1. Correlation analysis between holdings

- **NVDA / VTI / VXUS**: unchanged — the dominant correlation cluster is shared mega-cap AI/semis look-through exposure. VTI and VXUS both carry NVDA and its peers as top constituents, so the "diversified ETF" sleeve (60.59% of equity) is less diversifying against an AI-specific drawdown than its weight suggests.
- **NVDA / OMCL / GEHC**: low business-fundamentals correlation, but a shared discount-rate factor via DCF valuation — exactly the channel now frozen by the stale-rate problem above. All three move together on a WACC shock whether or not their underlying businesses do anything at all.
- **XLE vs. everything else — the live open question.** 10/8 gave a clean decoupling (XLE green, everything else red). Today gives the opposite test: a broad bounce with XLE moving a middling amount, not a standout, not a laggard. Neither day alone proves or disproves the hedge thesis; together they describe an asset with *some* negative-correlation behavior on stress days and *some* positive-correlation behavior on relief days — which, read plainly, is closer to "an energy-sector ETF with an elevated, not-yet-mean-reverted oil-price tailwind" than to "a dedicated geopolitical hedge instrument." This desk is not calling the thesis dead — just not confirmed, for the eighth-plus consecutive report running this question has been open.
- **VTI / VXUS**: moderate positive correlation (global equity beta), genuinely diversifying on geography/currency — the one pair in this book behaving exactly as designed, again today (both up, VXUS slightly more).
- **OMCL / GEHC**: both "healthcare," different sub-sectors (hospital pharmacy automation vs. medtech), low correlation beyond the shared label — today's biggest and third-biggest gainers respectively, moving for no shared, identifiable reason this desk could source.

## 2. Sector concentration (% of equity, look-through where estimable)

| Sector / bucket | % of equity | Note |
|---|---|---|
| Technology / Semis / AI (look-through: direct NVDA + VTI's/VXUS's own tech weight) | **~27-30% (estimate)** | Direct NVDA alone is 12.83%; remainder is look-through via the two core ETFs — unchanged standing estimate, not re-derived this run |
| Diversified US equity (VTI, ex-tech-look-through) | 31.31% (gross) | Largest single line item, a basket not a sector bet |
| Diversified ex-US equity (VXUS, ex-tech-look-through) | 29.27% (gross) | Second-largest line item, same caveat |
| Energy (XLE) | 12.77% | Satellite/hedge sleeve — see correlation discussion above |
| Healthcare — tech/services (OMCL) | 8.48% | Smallest-cap, least liquid holding |
| Healthcare — medtech/equipment (GEHC) | 5.33% | Modestly over BR's 4% target |

**Combined healthcare (OMCL+GEHC): 13.81% of equity.** **Combined satellite/conviction sleeve (NVDA+OMCL+XLE+GEHC): 39.41% of equity** vs. **60.59% in the two core ETFs.** No sector outside the AI/tech look-through approaches a concentration level this desk would flag independently.

## 3. Geographic exposure and currency risk

- **VTI**: 100% US-domiciled, USD-denominated. No direct FX risk.
- **VXUS**: ~100% ex-US (developed + EM), underlying holdings in EUR/JPY/GBP/EM currencies — the book's only real currency-translation exposure at the fund level. A sustained USD strength cycle is a return headwind independent of local performance.
- **NVDA**: USD revenue, but with Taiwan/China supply-chain and end-market exposure — geopolitical/export-control risk that rhymes with currency risk without being FX per se.
- **OMCL**: essentially pure US domestic revenue — no meaningful geographic/currency risk.
- **XLE**: US-domiciled integrated/E&P majors (XOM/CVX-weighted) with global operations; oil itself is a globally USD-priced commodity, so direct FX risk is limited but global demand still drives the underlying commodity price.
- **GEHC**: meaningful international revenue (global medtech sales) — some currency-translation exposure, smaller in dollar terms than VXUS's fund-level exposure given GEHC's 5.33% weight.

**Net: still a USD-heavy book.** VXUS is the only deliberate non-US/non-USD diversifier, sitting modestly over its 25% pool target (+0.75pp) — adequate as designed, no concern this run.

## 4. Interest rate sensitivity (per position)

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's DCF gap (-16.98%, narrowing on price alone) rests entirely on a Rf input now 8+ days stale |
| GEHC | **High** | Same DCF/WACC mechanism; MS's 10/9 read (-1.37%, near-parity) is a round-trip from last run's +0.64%, consistent with "noise band," not a rate re-anchor |
| OMCL | **Moderate-high** | DCF-dependent valuation (MS's widest-on-book +39.55% gap is itself WACC-sensitive), partially offset by contracted/recurring revenue |
| VTI | **Moderate** | Broad market including heavy mega-cap-growth/tech weighting, diversified by cyclicals/value too |
| VXUS | **Moderate-low** | Less mega-cap-growth-heavy than the US market; EM components carry independent rate/FX sensitivity |
| XLE | **Low-moderate, indirect only** | Primarily commodity-price-driven; MS's DCF gap (-9.89%, a fifth straight widening) is blocked on a stale $76/bbl Brent assumption, not a fresh rate read |

**Standing flag, now entering a third full week unresolved:** no desk has found a confirmable same-day 10yr Treasury print since roughly 10/1-10/2. MS's own rate-check note this run flagged two sourced figures (5.24% dated 10/1, 4.66-4.69% dated "late July") too far apart to be the same series — itself evidence the sourcing problem is getting worse, not just persisting. Every DCF-derived verdict in this book (five of six holdings) is running on an assumption that is now materially older than this desk is comfortable treating as "current."

## 5. Recession stress test (NBER-style, moderate-recession assumptions, pool-weighted)

| Position | Assumed recession drawdown | Pool-weighted contribution |
|---|---|---|
| NVDA (high-beta, capex-cyclical) | -45% to -55% | -5.1% to -6.2% |
| VTI (broad US equity, GFC/2020-style) | -30% to -38% | -8.3% to -10.5% |
| VXUS (intl equity + FX drag) | -32% to -40% | -8.2% to -10.3% |
| OMCL (small-cap liquidity discount despite defensive end-market) | -35% to -45% | -2.6% to -3.4% |
| XLE (demand-driven recession scenario) | -30% to -45% | -3.4% to -5.1% |
| GEHC (defensive healthcare end-market, but capex-cycle exposed) | -25% to -35% | -1.2% to -1.6% |

**Estimated pool-level drawdown: roughly -29% to -37%** in a standard demand-driven recession — consistent with BR's own standing -27% to -40% range. **Same caveat this desk repeats every run it's relevant:** this assumes a *demand-driven* recession where oil demand falls with everything else and XLE's -30%/-45% applies. If the recession is instead *supply/oil-shock-driven* — the scenario XLE was actually bought to hedge — XLE's behavior flips, potentially flat-to-positive, materially improving the pool outcome. Today's correlation evidence (§1 above) is the first live data this desk has to weigh which flavor is more likely to show up if it does, and it leans — weakly, on one green day — toward XLE behaving more like ordinary equity beta than like dedicated insurance.

## 6. Liquidity risk (per holding)

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Low risk | Mega-cap, among the most liquid equities traded |
| VTI | Low risk | One of the largest US ETFs by AUM/volume |
| VXUS | Low risk | Large, liquid diversified international ETF |
| XLE | Low risk | Large, liquid sector ETF |
| GEHC | Low-moderate risk | Large-cap, adequate average daily volume |
| **OMCL** | **Moderate risk — the book's least liquid holding** | Small-cap (~$1.5-2B market cap); meaningfully lower ADV than every other position. Irrelevant at today's $3.78 position size, but worth flagging ahead of any future DCA-gate tranche (now ~$1.78 away, the closest it's been): use a limit order and check the spread, same discipline already applied to the account's existing OMCL fills |

**No liquidity risk currently constrains this account's ability to exit any position at its current size.** Standing, low-urgency note.

## 7. Single-stock risk and position sizing

- **NVDA (12.83% equity / 11.29% pool):** +1.29pp over BR's 10% pool target, inside the 5pp drift band, well below the 18-20% single-name trigger. No sizing action warranted — appreciation (today, modest at +0.11%) is the only growth vector left under rule 20's standing no-new-cash cap.
- **OMCL (8.48% / 7.46%):** below its 10% pool target by design (DCA-gated, -2.54pp drift) — the mechanism working as intended, and now the closest it has been to firing (~$1.78 from the $2.50 threshold).
- **XLE (12.77% / 11.24%):** near its 12% pool target, in-band.
- **GEHC (5.33% / 4.69%):** modestly over its 4% pool target (+0.69pp), well inside the 5pp band. Price sits at the top of the closed continuation band — flagged as a note only, no mechanism attaches to it.
- **Combined NVDA+OMCL (21.31% of equity):** 3.69pp from the 25% backstop, essentially unchanged from 10/8 since both names moved up together today. This desk repeats its standing observation: a single outsized NVDA session (it has moved >3% intraday twice in the past two weeks) could close most of that gap without any new capital being deployed.
- **No position-sizing changes recommended this run.**

## 8. Tail risk scenarios (updated probability estimates)

| Scenario | Probability estimate | Pool-level impact |
|---|---|---|
| AI-bubble repricing / Dalio thesis materializes (NVDA gap -16.98%, narrowing on price, still unretracted) | ~20-25%, unchanged | -6% to -11% pool-level |
| 10yr yield confirmation gap forces a fresh WACC rebuild in either direction | ~20-25% — now unconfirmable for a **third full week**, with this run's two sourced figures actively disagreeing (see §4) rather than merely stale | -3% to -8%, concentrated in NVDA/OMCL/XLE/GEHC |
| Hormuz/Red Sea escalation to a sustained, confirmed closure | ~15-20%, unchanged — today's Brent reference (10/2-10/5, $100-108 range, Trump rejecting a 7-day Iranian reopening offer) is stale but directionally consistent with an elevated, unresolved risk premium | XLE theoretically +15-25% as intended hedge — but see §1/§5, today's correlation evidence weakens confidence this would actually play out cleanly |
| GEHC earnings (newly firmed to 10/28, 19 days out) and OMCL earnings (unresolved, ~10/29-11/4 per three disagreeing sources) both approach the 2-week window within the next run or two | New line item — ~100% this becomes live within 1-2 weeks, not a probability so much as a scheduling fact | Governed by existing contingency plans (GEHC structural-break plan, OMCL earnings plan) — no fresh action needed yet |
| Government shutdown escalation | ~10%, downgraded per BR's 10/8 watch-item reclassification | -3% to -6% if it re-escalates |
| Broad recession confirmation (NBER-style) | ~10-15% over 2-4 weeks — credit spreads remain historically tight, yield curve not inverted | -29% to -37% pool-level (see §5) |
| Today's bounce extends through the weekend without a confirmed catalyst (mirror image of 10/8's uncatalyzed sell-off) | ~30-35% (new line item) — momentum continuation is roughly as common after an uncatalyzed up-move as after a down one | +1% to +3% pool-level if it merely continues; this is upside, not a risk, but flagged because "uncatalyzed" cuts both ways on confidence |

## 9. Hedging strategies for the top 3 risks (equities-only — no options)

1. **Rate/macro data-blindness risk (now the sharpest-named risk this run):** no fixed-income sleeve exists in this all-equity mandate, so there is no true hedge against a rate shock this book can't even currently detect. The only mitigant remains deployable cash (12.03% of pool) staying uncommitted — already in place. **New recommendation:** treat every DCF verdict older than ~10/1 as explicitly provisional in any sizing decision until a same-day rate print is confirmable again — don't let staleness quietly become the new baseline.
2. **NVDA/AI-concentration risk:** unchanged — direct all fresh deployable cash away from NVDA (BR's standing, permanent policy) and toward under-target names once their own gates clear. OMCL's DCA gate (~$1.78 away) is the closest live mechanical lever and getting closer by the day on this bounce.
3. **Geopolitical/oil-supply-shock risk:** XLE remains the designated hedge on paper, but this desk's recommendation is unchanged from 10/8: **do not treat either day's price action — the 10/8 decoupling or today's mid-pack move — as confirmation of anything.** Do nothing differently until a dated, sourced oil/Hormuz catalyst actually explains a move. Calling either data point "proof" in isolation would be exactly the complacency this mandate exists to catch.

## 10. Rebalancing suggestions (allocation %, pool basis)

| Position | Current (pool) | BR target | Drift |
|---|---|---|---|
| VTI | 27.54% | 28% | -0.46pp |
| VXUS | 25.75% | 25% | +0.75pp |
| NVDA | 11.29% | 10% | +1.29pp — governed by the 5pp band, no action needed |
| XLE | 11.24% | 12% | -0.76pp |
| GEHC | 4.69% | 4% | +0.69pp |
| OMCL | 7.46% | 10% | -2.54pp (DCA-gated by design, narrowing as the gate approaches) |
| Cash | 12.03% | 11% | +1.03pp |

**No position breaches the 5pp single-position drift trigger — no rebalance is mechanically required.**

---

## Heat Map Summary

| Risk Factor | Level | Trend since 10/8 14:41 ET |
|---|---|---|
| Rate/macro data blindness (10yr unconfirmable, now a third full week, two sourced figures actively disagreeing this run) | 🔴 High | ↑ worsening — duration and internal inconsistency both up |
| XLE hedge-reliability claim (one decoupling day, one mid-pack day — still unresolved) | 🟠 Elevated | → unchanged in substance, but now a second, countervailing data point on file |
| NVDA valuation gap + AI-bubble commentary (-16.98%, Dalio warning still unresolved) | 🔴 High | ↓ gap narrowing on price alone, thesis itself unchanged |
| Hormuz/Red Sea/oil tail risk (underlying geopolitical risk itself) | 🔴 High | → unchanged on confirmable news (only stale 10/2-10/5 references found) |
| XLE DCF gap (-9.89%, fifth straight widening, still blocked on stale $76/bbl Brent) | 🟠 Elevated | ↑ widened again |
| Upcoming binary events (GEHC earnings 10/28 confirmed; OMCL earnings ~10/29-11/4 unresolved) | 🟡 Moderate | ↑ new — scheduling fact, not yet actionable |
| Look-through tech/AI concentration (~27-30% of equity) | 🟡 Moderate | → unchanged |
| OMCL drawdown (-24.37%) vs. widest DCF discount on book (+39.55%); DCA gate ~$1.78 away | 🟡 Moderate | ↑ gate getting closer on the bounce |
| Government shutdown status | 🟢 Low | → stable, downgraded per BR 10/8 |
| GEHC valuation (near-parity, -1.37%, round-tripping) | 🟢 Low | → unchanged in substance |
| Pool profit level (+1.45%) | 🟢 Positive | ↑ up from +0.83% at 10/8 close, continuing the bounce |
| Headline concentration triggers (NVDA%, NVDA+OMCL% combined) | 🟢 Low | → clean, 3.69pp buffer to the 25% trigger |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** all three targeted WebSearch queries this run (10yr Treasury yield, NVDA/AI-bubble news, Brent/Hormuz oil — each for today's date) again returned no usable same-day result, continuing the pattern every desk has now logged for over two weeks. The Brent query did surface 10/2 and 10/5 readings (~$102.30 and ~$102.60, swinging $100-108 on a rejected Iranian reopening offer) — stale by 4-7 days, discarded per rule 4 but logged above as directional context for the Hormuz tail-risk line. Live Robinhood quotes and MS's standing DCF/WACC inputs remain the only trusted figures this run.

---

Sources:
- Robinhood `get_portfolio` / `get_equity_positions` / `get_equity_quotes` (live, 2026-10-09 ~10:41 ET)
- Internal: trading-experiment/state.md (Balance history + Run notes through 10/9 ~10:37 ET), analysts/ms-dcf-valuation.md (10/9 ~10:3x ET, first AVGO build + price-roll on six holdings, rate-check note), analysts/br-portfolio-builder.md (10/8 ~16:13 ET, targets still governing), analysts/jpm-earnings-analyzer.md (10/9, GEHC date firmed to 10/28, OMCL still unresolved), analysts/gs-stock-screener.md, this desk's own 10/8 ~14:41 ET report (prior version, git history)
- Fresh WebSearch this run: 10-year Treasury yield (today) — no usable result, newest confirmable prints April/June 2026 vintage; NVDA/AI-bubble news (today) — no usable result, newest dated coverage November 2025; Brent/Hormuz oil news (today) — no usable result, newest confirmable references 10/2 ($102.30) and 10/5 ($102.60) 2026
