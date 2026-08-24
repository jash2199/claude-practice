# BW Risk Assessment — Risk Management Report
**Date: 2026-08-24 (~14:45 ET, Monday)** — second BW read of the day, following this desk's own 10:45 ET report. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time, plus fresh WebSearch verification of rates/CDS/tape developments since the morning read. All weights recomputed fresh this run, not carried from BR/MS/GS/JPM.

---

## Overall Portfolio Risk Grade: **C** (held, unchanged from the 10:45 ET read)

## Single biggest risk right now
**The NVDA pool-drift trigger buffer is still sitting at its tightest-ever reading — 0.38pp above the 10% pool-weight floor — essentially unmoved from this morning, with the same downside-approach dynamic this desk flagged for the first time at 10:45 ET.** NVDA is now $209.79, **−2.30% vs. Friday's close** (slightly worse than the −2.22% logged this morning), pool weight 10.38%. Nothing has resolved this — it is the same open risk, now four hours closer to Wednesday's 8/26 print with no new catalyst on either side. Radical transparency requires saying this plainly: this run is mostly a **confirmation, not a new development** — the one genuinely fresh, if modest, data points since 10:45 ET are (1) OMCL's unrealized loss deepening further intraday (see below), and (2) the VIX ticking up off its 2026 lows for the first time in weeks.

Compounding factors, all still live:
1. **NVDA/CRWD report Wednesday 8/26 after the close — now 2 trading days out.** Zero hedging capacity under the equities-only mandate.
2. **Rate-shock trigger (rule 6a) remains unresolved but still directionally favorable.** Friday 8/21's confirmed 30yr close was 5.273% (1-for-2 toward the two-consecutive-close test). Fresh WebSearch this run: 30yr trading ~5.24% (CNBC, intraday, previous close cited as 5.276%), 10yr ~4.71-4.72% — both still short of firing, and if the 30yr's intraday level holds into the 16:00 ET close, the streak **breaks and resets to 0-for-2** rather than advancing. Still not confirmed; the settled close is the only number that matters and hasn't printed yet at this run's timestamp.
3. **VIX ticked up to ~15.7-15.9 (+3.6% to +5.2% on the day)** — off the ~14.25 2026-low this desk flagged as "growing complacency" back on 8/17. Still a historically low absolute level, but the first directional move in weeks, consistent with today's Iran-sanctions/tariff risk-off tape. Logged as a data point, not a trigger.
4. **NVDA's 5-year CDS spread**: no fresher confirmed print found this run than the 8/18 read of ~80.77bps (below the 82bps 7/27 record, not fired) — this is now a sixth-plus cycle with no dated update, a standing data-quality gap this desk has flagged repeatedly without resolution.
5. **Sector rotation, not just broad risk-off**: today's tape shows the Nasdaq (-0.6%) meaningfully underperforming the Dow (+0.2%), with semis specifically cited as the drag — this is chip-sector-specific pre-print pressure layered on top of the Iran/tariff macro story, not a single undifferentiated risk-off move. Reinforces why NVDA fell harder than the book's other four holdings today.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| **NVDA pool-drift trigger proximity** | 🔴 High (unchanged: tightest ever, still approaching from the downside) | 0.38pp of headroom to the 10% floor — essentially flat vs. the 10:45 ET read, 2 days from the print |
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.12% of equity combined, ~4.88pp under the 25% trigger |
| Correlation / lack of true diversification | 🔴 High | All five holdings red again this run; NVDA/OMCL leading the drop, VTI/VXUS/XLE trailing in a tighter band — the same no-ballast pattern as this morning |
| Binary-event stacking (NVDA/CRWD print + Jackson Hole) | 🔴 High | 2 trading days to the print; zero options hedging capacity |
| OMCL unrealized loss | 🟠 Medium-High (deepening) | −26.4% since cost (avg $46.99 vs. live $34.60), worse than this morning's −24.6% read, still no identified catalyst |
| Sector concentration | 🟡 Medium | AI/mega-cap-tech (NVDA + VTI's embedded weight) remains the book's largest single factor bet; today's Nasdaq-vs-Dow divergence shows it pricing in isolation, not just riding the broad tape |
| Interest-rate / duration sensitivity | 🟡 Medium (improving, still unconfirmed) | 10yr ~4.71-4.72%; 30yr ~5.24% intraday vs. Friday's confirmed 5.273-5.276% close — favorable if it holds, not yet settled |
| Geopolitical / Hormuz-Iran-sanctions shock | 🟠 Medium-High | Same "Operation Economic Outcast" sanctions story as this morning, now with confirmed detail (China explicitly named); oil eased again today (~$85/bbl WTI, down ~2%) — XLE's hedge continues to lag, not lead, this specific risk factor |
| Volatility regime | 🟡 Medium (shifting) | VIX ~15.7-15.9, up off 2026 lows for the first time in weeks — a genuinely new, if modest, signal |
| Geographic / currency exposure | 🟡 Medium | ~69.5% of equity USD-domestic; VXUS (30.5%) the only unhedged FX sleeve |
| Liquidity risk | 🟡 Medium (OMCL) / 🟢 Low (others) | OMCL smallest, most-volatile, hardest to exit in size of the five holdings |
| Recession / broad drawdown | 🟡 Medium | See stress test below — no position is recession-proof |
| Hedging capacity | 🔴 High (structural gap) | Equities-only, ~$50 pool — cash is the only real hedge and sits at ~11.96% of pool, essentially unchanged for weeks |

---

## Correlation analysis
- **All five holdings are red again this run** — the second consecutive check-in with a fully correlated down day, reinforcing rather than newly establishing this desk's standing "no true diversification on a red day" flag.
- **NVDA (−2.30%) and OMCL (−2.75%) are today's two worst movers**, both meaningfully worse than VTI (−0.21%), VXUS (−0.48%), and XLE (−0.91%) — a genuine bifurcation between the two single-name satellite positions and the three diversified/basket holdings.
- **VTI vs. VXUS**: still moving together (−0.21%, −0.48%), the standard high-correlation pairing holding on this red session as on every other.
- **XLE vs. everything else**: fell with the tape again today (−0.91%) rather than offsetting it, even as oil itself eased (~$85/bbl WTI, down ~2%) — a second consecutive session where the hedge did not show up, reinforcing this morning's read that its hedge behavior is regime-dependent, not standing.
- **OMCL**: today's single worst mover in percentage terms, deepening an already-large unrealized loss with still no identified catalyst — "uncorrelated" continues to mean "poorly understood," not "diversifying," for this specific position.

## Sector concentration (equity-value basis)
- AI/semiconductors (direct): NVDA ≈ 11.79%
- Broad-market equity beta, mega-cap-tech-weighted: VTI ≈ 36.97% (embeds a further unquantified tech overweight via VTI's own top holdings)
- International developed + EM: VXUS ≈ 30.52%
- Healthcare IT: OMCL ≈ 8.33%
- Energy: XLE ≈ 12.38%

Roughly half the book (NVDA direct + VTI's embedded tech weight) remains a single concentrated bet on AI/mega-cap-tech multiples, now 2 trading days from that bet's own binary catalyst — unchanged from this morning's read.

## Geographic exposure and currency risk
- USD-domestic: NVDA, OMCL, XLE, VTI ≈ 69.5% of equity.
- VXUS ≈ 30.5% is the entire non-USD sleeve — developed-ex-US + EM, fully unhedged. A dollar move remains a return driver independent of underlying fundamentals here, as flagged in every prior report; nothing new to add this run.

## Interest-rate sensitivity by position
- **NVDA**: high — every basis point matters more with a binary print 2 days out; MS's most recent DCF (8/21) still shows a wide downside gap that widens directly with the discount rate.
- **OMCL**: high — small-cap growth healthcare IT, discount-rate sensitive, now compounding an even deeper unexplained drawdown.
- **VTI**: moderate-high — mega-cap/tech-heavy, inherits much of NVDA's duration in aggregate.
- **VXUS**: moderate — somewhat lower duration than VTI, not immune.
- **XLE**: low, arguably inverse — driven by the oil premium, not rates; today's second straight oil pullback despite live sanctions headlines shows this can cut against the position too.
- **GEHC (candidate, not held)**: moderate — still ~6.0% above the $70 entry ceiling this desk set 8/20; net-debt (~$8.0B) adds a rate-refinancing sensitivity layered on top of duration; not price-eligible this run.

## Recession stress test (illustrative peak drawdown)
| Position | Est. drawdown in a recessionary bear | Basis |
|---|---|---|
| NVDA | −45% to −60% | High-beta semis/AI drew down ~45-65% in 2022; recession adds demand downside on top of the current valuation stretch |
| VTI | −25% to −35% | Broad US market recession range, high end given elevated valuations/duration |
| VXUS | −25% to −35% | Similar; EM sleeve adds tail variance |
| OMCL | −35% to −50% | Small-cap growth healthcare IT, compounded by a visible, deepening idiosyncratic drawdown already in progress |
| XLE | −30% to −55% | Wide by design: a demand-shock recession hits energy hardest; a supply-shock/inflationary recession (still plausible given the live Hormuz/Iran-sanctions situation) could see it hold or rally |

**Blended estimate**: roughly −30% to −40% peak-to-trough on the ~$44.19 equity sleeve (≈ $13-18), pool-level −26% to −36% since cash is largely untouched. Trivial in absolute dollars at this book size; the percentage remains the number that should discipline sizing as the account scales — unchanged methodology from prior reports.

## Liquidity risk by holding
- NVDA, VTI, VXUS, XLE: **Low** — effectively unlimited at this account size.
- OMCL: **Medium** — mid/small-cap, the one position with non-negligible exit cost if sold in size, and the one whose price action remains least explicable of the five, now with the deepest unrealized loss on the book.

## Single-stock risk and position-sizing recommendations
- NVDA (11.79% of equity) and OMCL (8.33%) remain the only true single-name risk; combined 20.12% sits comfortably under the 25% hard trigger, but **the pool-drift trigger (a separate, tighter mechanism) is unchanged from this morning at 0.38pp of headroom — still the closest any trigger on this book has ever come to firing.**
- **Recommendation, unchanged and restated**: do not treat today's NVDA weakness as a buying opportunity to "average down" pre-print — any purchase now pushes exposure into a binary event with zero hedging capacity, exactly the wrong trade-off 2 days out. Equally, do not panic-trim if the drift trigger fires through the floor; let it force the review it exists to force, per the same discipline this desk has argued for the upside case all month.
- **OMCL, sharpened this run**: the position is now −26.4% since cost, the deepest drawdown in the book's history, with no fresh catalyst identified across two BW reads today. This desk is not calling for a trim (no structural break, per the standing OMCL contingency plan — a price move alone isn't a decision point) but flags plainly that the size of the unrealized loss itself is starting to be a notable single-stock risk data point on its own terms, independent of MS's valuation-discount framing, and worth an explicit question to JPM/GS: is there *any* company-specific explanation yet, or is this now purely macro/flow-driven drift?
- Rule 6a (rate shock): still unresolved — **the confirmed 16:00 ET close is the only number that matters; the next run must pull it, not another intraday snapshot.**
- On GEHC sizing: unchanged — endorse $2.50 quarter-size only paired with entry ≤ ~$70. Still not price-eligible this run (~$74.21, ~6.0% above ceiling).

## Tail risk scenarios
| Scenario | Rough probability (next 2-5 trading days) | Portfolio impact |
|---|---|---|
| NVDA prints in-line-to-good but the market sells it anyway (JPM: 3 of last 4 next-day reactions negative despite beats) | ~50-60% | Concentrated hit to NVDA + VTI's embedded tech weight; the book's written contingency plan is the live test case, 2 days away |
| NVDA's pool-drift trigger fires from further pre-print risk-off weakness (no NVDA-specific catalyst needed — only 0.38pp of headroom) | ~30-40% (unchanged from this morning — tightest buffer on record, flat over the last 4 hours despite continued risk-off tape) | Mandatory review forced from the downside, mid-event-week — the scenario this desk flagged as untested at 10:45 ET remains untested |
| Iran-sanctions escalation triggers a genuine Hormuz supply disruption (beyond today's rhetoric) | ~20-25% | Oil has now eased for a second straight session on sanctions news rather than spiking — the hedge (XLE) continues to look lagging, not leading, this specific risk |
| Rate-shock trigger (rule 6a) fires on today's close despite the intraday pullback | ~15-20% (unchanged — intraday 30yr still reads below Friday's confirmed close) | Multiple-compression concentrated in NVDA/OMCL/VTI's tech-heavy core |
| Chip-sector-specific stress reasserts into the print (CDS still elevated near 80.77bps, unresolved sourcing for a sixth-plus cycle; today's Nasdaq-vs-Dow divergence is a live symptom) | ~25-30% (raised slightly — today's sector-specific underperformance is a fresh, dated data point for this exact risk) | Compounds the earnings-reaction risk rather than being independent of it |
| Broad risk-off (Iran sanctions + US-Canada tariff standoff) extends through the print and Jackson Hole | ~25-30% | Compounds every other risk on this list simultaneously; VIX's uptick off 2026 lows is the leading indicator this desk will keep tracking |

## Hedging strategies for the top 3 risks (equities-only, no options)
1. **NVDA pool-drift trigger at its tightest-ever buffer, still approaching from the downside (top risk, unchanged from 10:45 ET)**: no options toolbox, so the lever is discipline, not action — do not add into the weakness (would mask the signal the trigger is designed to surface) and do not panic-trim if it breaches (same "forced review, not automatic sell" framing this desk has argued for the upside case). **Standing ask, restated a second time today**: this desk still has no explicit team confirmation that the trigger's response framework applies symmetrically to a downside/macro-driven fire — the closest call yet, and still open.
2. **Binary-event stacking (NVDA/CRWD print + Iran sanctions + Jackson Hole, compounding into the same 48 hours)**: cash is the only real hedge at this scale. Defend the ~11.96%-of-pool floor through the print; do not spend it down chasing a GEHC entry or averaging into NVDA weakness specifically inside this window.
3. **Geopolitical / correlation risk (a second consecutive all-five-red session today)**: XLE's hedge behavior is regime-dependent, not standing — it did not offset either of the last two risk-off sessions. No fix available under the equities-only mandate beyond continuing to hold XLE for the scenarios where it does work (a genuine Hormuz supply shock, as opposed to sanctions-announcement rhetoric or sector rotation) and not over-relying on it as a blanket portfolio hedge.

## Rebalancing suggestions
- **NVDA**: −4.62pp under the 15% pool target, buffer to the 5pp band's floor at just 0.38pp. **Do not close this gap via purchase before 8/26** — the tightness itself is the signal to leave alone, not fill.
- VTI +2.56pp over a 30% pool target, VXUS +1.88pp over 25% — both inside the 5pp band, no rebalance action warranted.
- OMCL −2.66pp under a 10% pool target — standing read unchanged: the drawdown remains unexplained and has deepened further; not a valuation-driven add case regardless of MS's DCF discount.
- XLE +0.90pp — essentially on target, no action.
- Cash at ~11.96% of pool, above the 10% floor — **defend this floor through the print and Jackson Hole window**; the one lever the book actually has this week.
- If new capital deploys, preference order unchanged: (1) let deployable cash sit at or above its current level through the event window; (2) any equity add should favor the lowest-correlation candidate at the right price (GEHC, still not there); NVDA remains the least-preferred add on risk grounds this week specifically, given the drift-trigger proximity.

---
*Prior report: consult `git log -p -- trading-experiment/analysts/bw-risk-assessment.md` for history.*

**Sources this run**: [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield), [US30Y: U.S. 30 Year Treasury (CNBC)](https://www.cnbc.com/quotes/US30Y), [Nvidia's credit default swaps surpass July peak (Seeking Alpha)](https://seekingalpha.com/news/4634471-nvidias-credit-default-swaps-surpass-july-peak), [NVIDIA's five-year CDS sees biggest single-day jump in history (Odaily)](https://www.odaily.news/en/newsflash/504222), [Nvidia's credit risk now exceeds Google's — CDS spreads widen to 69bps (CryptoBriefing)](https://cryptobriefing.com/nvidia-cds-spreads-surpass-google/), [Stock Market Today (Aug. 24, 2026): Nasdaq slides on Iran sanctions, U.S.-Canada tariff threats (Yahoo Finance)](https://finance.yahoo.com/markets/stocks/articles/stock-market-today-aug-24-134834490.html), [Stock market today: S&P 500, Nasdaq slip as Bessent announces 'economic asphyxiation' campaign against Iran (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-monday-august-24-dow-sp-500-nasdaq-080306047.html), [Stock Market Midday, Aug. 24: Dow Edges Higher as Chip Weakness Pressures Nasdaq (Motley Fool)](https://www.fool.com/coverage/stock-market-today/2026/08/24/stock-market-midday-aug-24-dow-edges-higher-as-chip-weakness-pressures-nasdaq/), plus Robinhood live quotes/positions/portfolio and the sibling analyst reports (GS 8/24, JPM 8/24, MS 8/21, BR 8/21) + state.md.
